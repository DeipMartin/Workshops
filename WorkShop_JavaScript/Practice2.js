class Human{
  constructor(name){
    this.name = name;
  }
  toString() {
    return "Hello, my name is " + this.name + "." ;
  }
}
var me = new Human("Guy");
me.toString();

class Person extends Human{
  constructor(name,age){
    super.constructor(name);
    this.age = age;
  }
  toString(){
    return super.toString() + "I am a person and my age is " + this.age + " .";
  }
}

var m = new Person("Jose",40);
m.toString();

class Child extends Person {
  cosntructor(name,age){
    super.constructor(name,age)
  }
  toString(){
    return super.toString() + "I consider myself a achild";
  }
}

var c = new Child("Guy",35);
c.toString();
