#卡尔曼滤波
>观测空间：可以通过各种传感器测量的量组成的空间
>真实状态空间：要通过卡尔曼滤波估计的量组成的空间
>公式中各变量的含义：

###预测部分
>* X(向量):状态空间矩阵，也就是真实状态空间中的变量组成的矩阵，1×n
>* A或F（矩阵）: 状态转移矩阵，将X的状态迁移到下一时刻，这个一般是建模出来的，也就是系统的物理模型。换句话说，通过A矩阵所代表的公式，可以根据当前时刻状态空间变量的值计算出下一时刻状态空间变量的值。n×n
>* B(矩阵): 控制变量转换矩阵，将当前输入的控制量转换到状态空间。换句话说，将控制量的作用效果求出来。n×n
>* W(矩阵)：过程噪声。不用换句话说 1×n

###测量部分
>* Z(向量)：n时刻观测值 1×n
>* P(矩阵)：协方差矩阵 n×n
>* H(矩阵): 状态转移矩阵，可以将变量从真实状态空间转移到观测状态空间。换句话说，将一个需要估计的变量的值转移到测量空间中去。m×n
>* K():卡尔曼增益