# cpp_5x-Experience-Day
C++练习 5倍经验日

5 倍经验日

题目背景：
现在乐斗有活动了！每打一个人可以获得 5 倍经验！absi2011 却无奈的看着那一些比他等级高的好友，想着能否把他们干掉。干掉能拿不少经验的。

题目描述：
现在 absi2011 拿出了 $x$ 个迷你装药物（嗑药打人可耻…），准备开始与那些人打了。
由于迷你装药物每个只能用一次，所以 absi2011 要谨慎的使用这些药。悲剧的是，用药量没达到最少打败该人所需的属性药药量，则打这个人必输。例如他用 $2$ 个药去打别人，别人却表明 $3$ 个药才能打过，那么相当于你输了并且这两个属性药浪费了。
现在有 $n$ 个好友，给定失败时可获得的经验、胜利时可获得的经验，打败他至少需要的药量。
要求求出最大经验 $s$，输出 $5s$。

输入格式：
第一行两个数，$n$ 和 $x$。
后面 $n$ 行每行三个数，分别表示失败时获得的经验 $\mathit{lose}_i$，胜利时获得的经验 $\mathit{win}_i$ 和打过要至少使用的药数量 $\mathit{use}_i$。

输出格式：
一个整数，最多获得的经验的五倍。

思路：
01背包问题，没什么好说的，但是要注意本题有一个特殊性，在标准01背包问题中不考虑背包容量为0的情况（j = 0），而本道题需要考虑（在本题中j代表当前拥有药剂数量）。
即当没有药剂时，所获得的经验是lose经验，所以要考虑到0的状态。
