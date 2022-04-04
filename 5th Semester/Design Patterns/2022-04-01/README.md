Esta foi uma aula relacionada à acoplação, tivemos que desenvolver a seguinte estrutura tentar diminuir o acoplamento:

````mermaid
classDiagram
    class Veiculo{
        +String name
        +Model()
    }
    class Model{
        +String name
        +Brand()
    }
    class Brand{
        +String name
    }
    Veiculo --* Model
    Model --* Brand
````

Ao final da implementação devemos criar um método em `Veiculo` para exibir todas as informações (placa, marca e modelo).
Eu escolhi por criar um método em `Model` chamado `getBrandName()` que retorna uma String. Desta forma, caso o `Veiculo`
queira saber sua marca, não precisará chamar métodos encadeados.

````java
public String displayData(){
        return"Brand: "+this.model.getBrand().getName()+
        "\nModel: "+this.model.getName()+
        "\nPlate: "+plate;
        }
````

Chamaremos apenas:

````java
public String displayData(){
        return"Brand: "+this.model.getBrandName()+
        "\nModel: "+this.model.getName()+
        "\nPlate: "+plate;
        }
````