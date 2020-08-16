# Minimal cmake boilerplate

Install [clangd](https://clangd.llvm.org/installation.html).

`mkdir` `build` folder. `cd` into `build` folder and run

```
cmake ..
make
./main
```

`compile_commands.json` will be written to `build` directory. Symlink it (or simply copy it) to the root of source tree: `cd` to the root and

```
ln -s build/compile_commands.json .
```
