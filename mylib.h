#!/bin/bash
#复制库文件到 /usr/lib/x86_64-linux-gnu/ 这个文件夹
echo ""
echo "说明：复制库文件到 /usr/lib/x86_64-linux-gnu/ 这个文件夹"
echo  "cp mylib/* /usr/lib/x86_64-linux-gnu/"

echo ""
cp mylib/* /usr/lib/x86_64-linux-gnu/


#Linux zip命令的基本用法是：
#zip [参数] [打包后的文件名] [打包的目录路径]

#linux zip命令参数列表：
#-a 将文件转成ASCII模式
#-F 尝试修复损坏的压缩文件    
#-h 显示帮助界面
#-m       将文件压缩之后，删除源文件
#-n 特定字符串    不压缩具有特定字尾字符串的文件
#-o       将压缩文件内的所有文件的最新变动时间设为压缩时候的时间
#-q       安静模式，在压缩的时候不显示指令的执行过程
#-r       将指定的目录下的所有子目录以及文件一起处理
#-S 包含系统文件和隐含文件（S是大写）
#-t 日期 把压缩文件的最后修改日期设为指定的日期，日期格式为mmddyyyy

#举例：说个最常用的吧，打包/opt/abc目录到/opt/abc.zip
## zip -r /opt/abc.zip /opt/abc/    //参数一般只要有-r
