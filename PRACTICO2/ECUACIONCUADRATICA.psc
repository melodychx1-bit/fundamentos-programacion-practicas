Algoritmo EcuacionCuadratica
	
    Definir a, b, c, D, x1, x2 Como Real
    
    Escribir "Resolver ecuacion cuadratica"
    
    Escribir "Ingrese a"
    Leer a
    
    Escribir "Ingrese b"
    Leer b
    
    Escribir "Ingrese c"
    Leer c
    
    D <- b*b - 4*a*c
    
    Si D > 0 Entonces
        x1 <- (-b + RC(D)) / (2*a)
        x2 <- (-b - RC(D)) / (2*a)
        Escribir "Las soluciones son:", x1, "y", x2
    SiNo
        Si D = 0 Entonces
            x1 <- -b / (2*a)
            Escribir "La solucion es:", x1
        SiNo
            Escribir "No tiene soluciones reales"
        FinSi
    FinSi
	
FinAlgoritmo
