#!/bin/sh
#$1 命令行第一个参数 $2 命令行第二个参数
#运行格式 ./bat.sh leetcode 题目编号 leetcode题目名称
cat  C:/Users/MiaoHui/OneDrive/Projects/leetcode/leetcode/leetcode.cpp \
			 	>> C:/Users/MiaoHui/Documents/GitHub/LeetCode/Medium/$1.cpp
git pull
git add  Medium/$1.cpp
git commit -m "$2"
git push -u origin master
