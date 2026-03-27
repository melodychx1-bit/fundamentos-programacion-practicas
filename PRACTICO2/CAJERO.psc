Algoritmo RetirarDineroDeUnCajero
	
    Definir pin, pinCorrecto, monto, saldo Como Entero
    
    pinCorrecto <- 1234
    saldo <- 1000
    
    Escribir "Insertar tarjeta"
    Escribir "Ingrese su PIN"
    Leer pin
    
    Si pin = pinCorrecto Entonces
        
        Escribir "Ingrese monto a retirar"
        Leer monto
        
        Si monto <= saldo Entonces
            saldo <- saldo - monto
            Escribir "Retire su dinero:", monto
            Escribir "Saldo restante:", saldo
        SiNo
            Escribir "Saldo insuficiente"
        FinSi
        
    SiNo
        Escribir "PIN incorrecto"
    FinSi
    
    Escribir "Retire su tarjeta"
	
FinAlgoritmo

