# gnome-terminal-replacer

在 gnome 环境下，许多使用终端的地方都写死了使用 gnome terminal，无法更改默认终端。因此，只好写一个东西来替代掉gnometerminal，并调用你喜欢的终端。

## Usage

将 `main.cpp` 编译，之后改名为 gnome-terminal，放到 `/usr/local/bin` 中，以后如下的命令： `gnome-terminal --working-directory='~/' -- ls` 都会被翻译成 `konsole` 的命令并执行啦！（只支持 `--working-directory=` 和 `--` 两种命令行参数） 
