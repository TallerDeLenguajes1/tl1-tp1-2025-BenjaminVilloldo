# tp1
# Respuestas al tp 1
**¿Por qué es conveniente incluir un archivo `.gitignore`?**

El archivo `.gitignore` es importante porque especifica qué archivos o directorios **no deben ser rastreados por Git**. Esto es útil para evitar que se suban archivos innecesarios, como configuraciones locales, archivos temporales, dependencias de la aplicación, entre otros. También ayuda a reducir el tamaño del repositorio y a mantenerlo limpio.


**¿Como se debe hacer?**
El archivo `.gitignore` debe ser creado al inicio del proyecto, para evitar la inclusión accidental de archivos no deseados. Si el repositorio ya está en funcionamiento, puedes agregarlo en cualquier momento y Git automáticamente comenzará a ignorar los archivos especificados en el `.gitignore`.

**¿Cómo configurarías el archivo `.gitignore`?**
Un archivo `.gitignore` se configura simplemente añadiendo patrones que representen los archivos o carpetas que no deseas que Git rastree. Por ejemplo:

```bash

*.log

node_modules/

.vscode/
