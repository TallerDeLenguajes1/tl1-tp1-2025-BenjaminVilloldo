#  Archivo `.gitignore`

##  ¿Por qué es conveniente incluirlo?
El archivo `.gitignore` se usa para evitar que ciertos archivos o directorios sean rastreados por Git. Esto es útil para:

- **Evitar subir archivos sensibles** (contraseñas, credenciales, etc.).
- **Ignorar archivos generados automáticamente** (logs, archivos temporales, dependencias de compilación).
- **Mantener limpio el historial de Git**, evitando cambios innecesarios.

##  ¿Cuándo se debe usar?
Se debe incluir desde el inicio del proyecto, especialmente en casos como:

- Proyectos que generan archivos compilados (`.exe`, `.class`, `.o`).
- Repositorios con dependencias que pueden reinstalarse (`node_modules`, `vendor`, `venv`).
- Archivos de configuración local (`.env`, `.vscode/settings.json`).

##  ¿Cómo configurar el archivo `.gitignore`?
El archivo `.gitignore` se configura agregando los nombres o patrones de archivos a ignorar. Ejemplo:

Ejercicio 3 - Respuestas
 ## ¿Por qué en los apartados 2 y 3 el resultado es el mismo?
El resultado en ambos casos es igual porque el puntero punt almacena la dirección de memoria de la variable num.
Cuando usamos &num, obtenemos esa misma dirección, ya que el operador & devuelve la ubicación en memoria de una variable.

 ## ¿Qué se obtiene en el punto 4 y por qué es diferente?
En el punto 4, &punt nos da la dirección de memoria del puntero, que es distinta de &num.
Esto sucede porque punt es una variable independiente que almacena la dirección de num,
pero sigue teniendo su propia ubicación en memoria.

En otras palabras, aunque punt apunta a num, sigue siendo una variable diferente,
por lo que su propia dirección de memoria (&punt) no coincide con la de num.

 ## Conclusión: Un puntero almacena la dirección de otra variable, pero sigue siendo una variable en sí mismo, con su propia dirección en memoria.