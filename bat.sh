#!/bin/bash
#$1 命令行第一个参数
cat  /Users/miaohui/ClionProjects/leetcode/main.cpp \
			 	>> /Users/miaohui/Documents/LeetCode/Medium/$1.cpp
git commit
git push
