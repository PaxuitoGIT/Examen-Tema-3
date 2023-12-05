# Examen-Tema-3

Se accede al repositorio desde aquí: https://github.com/PaxuitoGIT/Examen-Tema-3

## Parte 1: Preguntas de elección múltiple

### 1.¿Cuál es el propósito principal de la clase Variant en el lenguaje Tiny Lisp?

b) Representar cualquier tipo de dato Lisp

### 2.¿Qué representación se obtiene al utilizar el método to_string() en un objeto Variant?

a) Una cadena de texto que representa una instancia de Variant

### 3.¿Qué función cumple el método to_json_string() en la clase Variant?

b) Convierte un objeto Variant a una cadena JSON

### 4.¿Qué función cumple el método from_json_string() en la clase Variant?

a) Convierte una cadena JSON en un objeto Variant

## Parte 2 Pregunta de desarrollo de código (80%):Sistema de Scripting para Motor de Videojuegos Indie

### Estructura Básica:

Lo implementé en environment.h

### Insertar Símbolos:

En environment.h y environment.cpp

### Búsqueda de Símbolos:

En environment.h y environment.cpp

### Gestión de Errores:

En environment.cpp

### Integración con Variant

En environment.cpp, variant.h y ejemplos.cpp

### Expandiendo Funcionalidades:

En environment.cpp 

### Casos de Uso:

En videojuego.cpp

### Reflexión y Mejoras:
Las mejoras que puedo realizar son en:

Optimización: Usar std::unordered_map en lugar de std::map para almacenar los símbolos.

Expansión: Permitir almacenar más tipos de datos, como funciones o clases.

Funciones avanzadas: Añadir soporte para funciones definidas por el usuario y control de flujo.

Manejo de errores: Mejorar los mensajes de error y la recuperación de errores.

Interfaz de usuario: Mejorar la interfaz para facilitar la escritura de scripts.



