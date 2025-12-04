'''
TAI-5 -> Paradigma Orientado a Objeto
Sistema de Produtos
'''

# classe base
class Produto:
    def __init__(self, nome):
        self.nome = nome
        self._preco = 0.0

    # método de acesso
    def get_preco(self):
        return self._preco
    
    def set_preco(self, novo_preco):
        if novo_preco >= 0:
            self._preco = novo_preco
        else:
            print('ERRO: O preço não pode ser negativo.')

    def exibir_Detalhes(self):
        print(f'Produto : {self.nome}   |   Preço : R${self._preco:.2f}')

class Eletrônico(Produto):
    def __init__(self, nome, voltagem):
        super().__init__(nome)
        self.voltagem = voltagem

    def exibir_Detalhes(self):
        print(f'Produto : {self.nome}   |   Preço : R${self._preco:.2f}   |   Voltagem : {self.voltagem}')


if __name__ == '__main__':
    p1 = Produto('Caderno')
    p1.set_preco(18.50)

    p1.set_preco(-10.00)

    e1 = Eletrônico('Liquidificador', 110)
    e1.set_preco(229.99)

    p1.exibir_Detalhes()
    e1.exibir_Detalhes()