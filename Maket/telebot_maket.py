import telebot
import config

# telegram
bot = telebot.TeleBot(config.TOKEN)

# keyboards
keyboard_start = telebot.types.ReplyKeyboardMarkup(resize_keyboard=True).add('Начать')


@bot.message_handler(commands=['start'])
def start_handler(message):
    bot.send_message(message.chat.id, "Привет, это шаблон бота!", reply_markup=keyboard_start)


@bot.message_handler(content_types=['text'])
def menu(message):
    pass


bot.polling()
