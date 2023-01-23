# TST-closed-loop-tracking-algorithm
# T-ST闭环循迹算法
## 使用说明
本算法场景为传感器仅有光电模块(>=2)的小车循黑线

本算法为闭环循迹算法，具有较好的鲁棒性及准确性
## 算法原理
[请看博客](https://blog.doublecat.cn/post/TST-closed-loop-tracking-algorithm/)
## 算法区块
- [X] 测试数据生成
- [ ] 高斯拟合算法
- [ ] 中值夹逼算法
- [ ] 主代码书写
## 代码目录
```
main
 ⌞ TestDataCreater
     ⌞ Creater.cpp
     ⌞ test.in
     ⌞ test.out
 ⌞ GaussianFit
     ⌞ GaussianFit.h
     ⌞ GaussianFit.cpp
 ⌞ MedianPinch
     ⌞ MedianPinch.h
     ⌞ MedianPinch.cpp
 ⌞ main.cpp
```
