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
