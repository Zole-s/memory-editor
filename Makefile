install:
        echo "[*] Started compiling buffer overflow script"
        g++ buffero.cpp -o bfo
        chmod +x bfo                                                      echo "Type 'make rebuild' To rebuild the project"
        ./bfo
rebuild:
        echo "Cleaning traces"
        rm bfo
        make install
