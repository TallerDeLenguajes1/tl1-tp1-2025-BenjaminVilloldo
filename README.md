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

