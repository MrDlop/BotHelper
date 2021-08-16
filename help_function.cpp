#include "help_function.h"
#include <QFile>
#include <QTextStream>
#include <QFileDialog>


void help_function::file_copy(QString fileIn, QString dirIn, QString fileOut, QString dir){
    fileIn = dirIn + fileIn;
    fileOut = dir + fileOut;
    if(!QFile(fileOut).exists())
        qWarning("The sourse file does not exist");
    else
        QFile::copy(fileOut, fileIn);
}

void help_function::easy_file(const QString typeProgramm, const QString textToken, QString fileIn, QString dirIn){
    // Изменение слешей на допутимый формат
    auto change_slash{
        [](QString& path){
            for(int i = 0;i<int(path.size());i++){
                if(path[i]=='\\' || path[i]=='/'){
                    path = path.mid(0, i) + "\\" + path.mid(i+1);
                    ++i;
                }
            }
        }
    };
    // Директория макетов
    QString dir = ".\\Maket\\";
    //Имя шаблона
    QString fileOut = typeProgramm + "_maket.py";
    //Изменение слешей в путях
    change_slash(fileIn);
    change_slash(dirIn);
    change_slash(fileOut);
    change_slash(dir);

    help_function::file_copy(fileIn, dirIn, fileOut, dir);

    //Создание config
    QString path = dirIn;
    path += "\\config.py";
    QFile file(path);
    //Запись токена в config
    if (file.open(QIODevice::WriteOnly)) {
      QTextStream out(&file);
      out << textToken;
    } else {
        qWarning("Could not open file");
      }
    file.close();
}
