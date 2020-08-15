Documentation of the SHU-LevelLanguage v0.1

Each level begins with the declaration of objects that are needed in the level. To declare a new object one uses the #-operator, followed by the type of this object. Currently, in Version 0.1, the only object that can be used is the charakter. The type is followed by the unique name of the object. Non-unique names might cause errors. In the next lines one is able to specify the attributes of the declared object. This is done with the following syntax:
- property: parameter
If one is done with an object, the next one can be declared by again using the #-Operator. For example:
# charakter Name
- color: blue
- hair: green

# charakter Name2
- color: grey
- eyes: red

If the declaration of objects is finished the different events of the level can be added. Each event needs an unique integer as identifier. They start with the *-Operator followed by the identifier and an action. Actions are:

- a charakter saying something. For this one uses the keyword char followed by the charakters name. Then one uses the :-operator to begin and again to end the said. Variables, pronounced with $smthg, will be replaced by their value. 

- a choice. In this case the user can choose beetween the given options. Each option is started by an Integer followed by a point. With these numbers the user will do his input. After the identifier the displayed option follows. After the choices another action follows. It will be executed if this option is chosen. The best action here is the goto-action to make an easy-to-read code

- an input. With this action one can write input into a variable. Internally this will be stored as a string. The input is used the following: input = $variable

- 

