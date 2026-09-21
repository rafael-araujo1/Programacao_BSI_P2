h = float(input("Insira o valor de H: "))
r = float(input("Insira o valor de R: "))

area = (3.14 * (r**2)) + (2 * r * 3.14 * h)
litro = area / 3
qtde = litro / 5
c = qtde * 50.0

print(f"""
C: {c:.2f}
Quantidade: {round(qtde)}""")
