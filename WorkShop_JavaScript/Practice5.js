//Symbols For Computer Methods

class QueryList{
  cosntructor(list){
    this.collection = list; 
  }
  *[Symbol.iterator](){
    for (let obj of this.collection){
      yield obj;
    }
  }
}

var list = ["item 1","item 2","item 3"];
var ql = new QueryList(list);

for (let item of ql){
  console.log(item);
}
