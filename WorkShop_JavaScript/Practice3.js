class GetThings{
  constructor(size){
    this.length = size;
  }
  get Length(){
    return this.length;
  }
  set Length(value){
    this.length = value;
    console.log("The value has been set ");
  }
}

var thing = new GetThings(9);
thing.Length

