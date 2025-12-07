from abc import ABC, abstractmethod # importação biblioteca de abstração
 
class Pessoa(ABC):
    '''
    Herda ABC, o que a torna abstrata.
    Classe Pai abstrata - não pode ser instanciada diretamente. 
    '''
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    @abstractmethod # define método como abstrato, as subclasses são obrigadas a implementar este método.
    def realizar_atividade(self):
        pass

    def apresentar(self):
        print(f'Olá, meu nome é {self.nome} e tenho {self.idade} anos.')

class Professor(Pessoa):
    def __init__(self, nome, idade, disciplina):
        # chama o construtor da classe pai
        super().__init__(nome, idade)
        self.disciplina = disciplina

    # sobrescrita (override) da abstrata. implementação específica para classe Professor.
    def realizar_atividade(self):
        return f'{self.nome} está lecionando a matéria : {self.disciplina}.'
    
class Aluno(Pessoa):
    def __init__(self, nome, idade, matricula):
        # chama o construtor da classe pai
        super().__init__(nome, idade)
        self.matricula = matricula

    # sobrescrita (override) da abstrata. implementação específica para classe Aluno.
    def realizar_atividade(self):
        return f'{self.nome} (Matrícula : {self.matricula}) está estudando para prova.'
    
if __name__ == '__main__':
    print("-----    Demonstração de Herança e Classe Abstrata   -----\n")
    p1 = Professor('André', 35, 'Paradigmas de Linguagens de Programação')
    p2 = Aluno('Nathã', 18, '1250109474')
    # p3 = Pessoa('João', 25) Dará ERROR ao tentar instanciar a class abstrata.

    # lista para exemplo de polimorfismo
    lista = [p1, p2]


    for pessoa in lista:
        # chamada usa método da classe Pessoa, mas é executado na classe real Professor/Aluno
        atividade = pessoa.realizar_atividade()
        pessoa.apresentar() # método herdado base

        print(f'Atividade Principal : {atividade}') # método polimórfico
        print('-' * 30)
        print()