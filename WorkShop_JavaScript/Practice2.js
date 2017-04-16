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
var  = new Person("Jose",40);
class Child extends person {
  
}
