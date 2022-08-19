# TMP36

[![tmp-esquem-tico.png](https://i.postimg.cc/x15RLVFc/tmp-esquem-tico.png)](https://postimg.cc/SnXCp34h)

Lectura de tempetatura de un sensor TMP36.

## Funcionamiento
### Variables
- ```temp```: temperatura en grados centígrados.
- ```cache```: lectura anterior de la temperatura.

### Funcionamiento
- Usando la función ```analogRead``` se lee la temperatura del sensor:
    - Se lee el valor de la temperatura en el pin ```A0``` del microcontrolador.
    - El valor se reescala de 0 a 1023 para que sea un valor entre 0 y 5V.
    - Al valor se le resta el valor de la temperatura mínima que se puede obtener con el sensor y se divide entre el rango de temperatura que se puede obtener con el [sensor]((https://pdf1.alldatasheet.com/datasheet-pdf/view/49108/AD/TMP36.html)).

- Si la temperatura cambia de una lectura a otra, se imprimirá el valor de la temperatura en el monitor.
