#include <stdio.h>

int main(){

    int pollo, carne, queso, refresco, agua;
    float p_pollo=3.50, p_carne=4.00, p_queso=3.00, p_refresco=5.00, p_agua=3.00;
    float t_pollo, t_carne, t_queso, t_refresco, t_agua;
    float total;

    printf("Cantidad de saltenas de pollo: ");
    scanf("%d",&pollo);

    printf("Cantidad de saltenas de carne: ");
    scanf("%d",&carne);

    printf("Cantidad de empanadas de queso: ");
    scanf("%d",&queso);

    printf("Cantidad de refrescos: ");
    scanf("%d",&refresco);

    printf("Cantidad de aguas: ");
    scanf("%d",&agua);

    t_pollo = pollo * p_pollo;
    t_carne = carne * p_carne;
    t_queso = queso * p_queso;
    t_refresco = refresco * p_refresco;
    t_agua = agua * p_agua;

    total = t_pollo + t_carne + t_queso + t_refresco + t_agua;

    printf("---------DETALLE----------\n");
    printf("Pollo: %.2f Bs\n", t_pollo);
    printf("Carne: %.2f Bs\n", t_carne);
    printf("Queso: %.2f Bs\n", t_queso);
    printf("Refresco: %.2f Bs\n", t_refresco);
    printf("Agua: %.2f Bs\n", t_agua);

    printf("EL TOTAL A PAGAR ES: %.2f Bs\n", total);

    return 0;
}
