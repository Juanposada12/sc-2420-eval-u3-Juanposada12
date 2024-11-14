[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/-g_ni1Wx)
# Documentación del Proyecto
## Unidad 3

Estudiante:  
Id:  
---
1. ¿Por qué, en este apartado, se afirma que la POO no es un lenguaje de programación? ¿Estás de acuerdo con esta apreciación?
La Programación Orientada a Objetos (POO) no es un lenguaje de programación en sí misma, sino un paradigma de programación. Un paradigma de programación es una forma de conceptualizar y organizar el código para resolver problemas. Es una manera de pensar y estructurar el desarrollo del software, no un lenguaje específico.
Existen lenguajes de programación que soportan la POO (como Java, C++, Python, Ruby, etc.), pero la POO es un conjunto de principios y técnicas aplicables a diversos lenguajes. Estos principios incluyen la encapsulación, herencia, polimorfismo y abstracción, que se implementan de distintas formas según el lenguaje utilizado.
¿Estoy de acuerdo? Sí, estoy de acuerdo con esta afirmación. La POO no es un lenguaje de programación, sino un enfoque que puede ser implementado en diferentes lenguajes de programación. El hecho de que un lenguaje soporte la POO significa que permite utilizar estos conceptos y estructuras para organizar y manipular los datos, pero no es el paradigma por sí mismo.
2. ¿Cuál va a ser la estrategia que vas a emplear para modificar tu código, incorporando los conceptos de la POO? Describe el paso a paso
Para incorporar los conceptos de la POO en mi código, seguiré una estrategia basada en los principios fundamentales de la POO, con un enfoque en modularidad, abstracción y reutilización. A continuación te describo el paso a paso:
Paso 1: Identificar entidades y objetos
•	Analizar el problema que estamos resolviendo y encontrar las entidades clave que se van a modelar como objetos. En el caso del código que hemos desarrollado, las entidades son Personaje, Mago, Guerrero y Equipo.
•	Las clases (Personaje, Mago, Guerrero, Equipo) representarán estos objetos.
Paso 2: Definir las clases y sus atributos
•	Encapsulación: Cada clase debe tener atributos privados que definen su estado. Estos atributos no deben ser accesibles directamente desde fuera de la clase; en su lugar, se debe proporcionar una interfaz pública mediante métodos (funciones) para interactuar con ellos.
•	Definir los atributos de las clases. Por ejemplo, un Personaje tendrá atributos como nombre y vida, un Mago tendrá mana, y un Guerrero tendrá fuerza.
Paso 3: Definir métodos para las clases
•	Los métodos (funciones dentro de las clases) definen el comportamiento de los objetos. Asegurarse de que cada clase tenga métodos relevantes para su comportamiento. Ejemplos:
o	mostrar_estado() para mostrar la información del personaje.
o	crear() y destruir() para simular la creación y destrucción de los personajes.
Paso 4: Implementar la herencia
•	Herencia: Utilizar la herencia para definir relaciones entre clases. Mago y Guerrero deben ser clases derivadas de Personaje. Esto permite reutilizar código común (como nombre y vida de Personaje) y extender el comportamiento de las clases derivadas (como agregar mana a Mago y fuerza a Guerrero).
Paso 5: Abstracción y polimorfismo
•	Abstracción: Proveer una interfaz clara para interactuar con objetos sin exponer los detalles internos. Esto ya se logra mediante la definición de métodos públicos.
•	Polimorfismo: Usar métodos virtuales (en C++ o equivalentes en otros lenguajes) para permitir que las clases derivadas sobrescriban el comportamiento de métodos comunes, como mostrar_estado().
Paso 6: Crear una estructura que gestione los objetos (como Equipo)
•	Usar el concepto de composición para organizar objetos. El Equipo puede ser una clase que contenga múltiples objetos de tipo Personaje y tenga un método para gestionar su estado.
Paso 7: Manejo de memoria (si se usa C++ o lenguajes similares)
•	Si se está trabajando con punteros, como en el caso de C++, es importante gestionar la memoria correctamente. Usar punteros inteligentes (como unique_ptr o shared_ptr en C++) o asegurarse de liberar la memoria manualmente si no se usan punteros inteligentes.
3. Conclusiones después de esta actividad. ¿Qué aprendiste, qué sabías, pero pudiste profundizar? ¿Cuáles son los temas que aún te generan dudas?
Lo que aprendí:
•	La programación orientada a objetos es un enfoque fundamental para estructurar el software de manera más modular, reutilizable y fácil de mantener. Al dividir el código en clases con comportamientos bien definidos, se facilita la escalabilidad y el mantenimiento del software.
•	La herencia, polimorfismo y encapsulación no solo son conceptos teóricos, sino que realmente ayudan a reducir la redundancia y mejorar la organización del código.
•	La importancia de liberar la memoria correctamente cuando se usan punteros (en C++), especialmente cuando se trabaja con objetos dinámicos, es crucial para evitar fugas de memoria.
Lo que ya sabía, pero pude profundizar:
•	Ya tenía una comprensión básica de los conceptos de la POO, pero pude profundizar en su aplicación práctica, sobre todo en el uso de punteros y en cómo las clases derivadas pueden modificar el comportamiento de las clases base mediante sobrescritura de métodos.
•	El uso de vectores y cómo almacenar punteros a objetos derivados en un contenedor genérico (como un vector<Personaje*>), lo que permite manejar una colección de objetos heterogéneos (de diferentes tipos de clases derivadas).
Temas que aún me generan dudas:
•	Aunque el manejo básico de punteros y memoria en C++ es claro, siempre es un tema complejo, especialmente cuando se usan punteros compartidos o cuando se manejan objetos grandes o complejos. Los punteros inteligentes son una buena solución, pero entender en profundidad su funcionamiento y cuándo usar cada tipo (unique_ptr, shared_ptr, weak_ptr) puede ser un tema de estudio continuo.
•	El uso de interfaces y clases abstractas en lenguajes que no cuentan con interfaces explícitas (como C++) también es algo que quiero estudiar más profundamente, para entender cómo diseñar sistemas que aprovechen estos conceptos de manera eficiente.

