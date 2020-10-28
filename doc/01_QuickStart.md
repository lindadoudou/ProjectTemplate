## QuickStart

### install dependent tools 
```
sudo apt install git doxygen cmake build-essential
```

### setup develop env
#### pull git submodule 

```bash
git submodule update --init --recursive
```

### build 
#### build unit test

```bash 
mkdir build && cd build
cmake .. -DBUILD_TEST=ON
make 
./test/unit/unit_test
```

#### build doc

```bash 
mkdir build && cd build
cmake .. -DBUILD_DOC=ON
make doc
```
document entry: `build/docs-generated/html/index.html`