# DijkstraWithHeap

### 如果安装了 MinGW:

```shell
$ mkdir build
$ cd build
$ cmake -G "MinGW Makefiles" ..
$ make -j8
```

生成的二进制文件在 bin 下。

在项目文件结构没有修改的情况下，每次只要重新执行 make 就行。



### 如果没有安装 MinGW，但是安装了 VS：

```shell
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build . -j8
```

生成的二进制文件在 bin 下。



### 如果都没有

请自行搜索 cmake 用法