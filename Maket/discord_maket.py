import discord
from discord.ext import commands
from config import settings_ds

bot = commands.Bot(command_prefix=settings_ds['prefix'])


@bot.command()
async def test(ctx):
    await ctx.send(f'Hello, {ctx.message.author.mention}!')


@bot.command()
async def helps(ctx):
    await ctx.send(f'Hello, {ctx.message.author.mention}! Эмиль готов')


bot.run(settings_ds['token'])
