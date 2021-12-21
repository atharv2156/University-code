
//prototype of object
let objAddress = {
    name: 'atharv',
    address: 'earth',
    gender: 'male'
}
console.log(objAddress);

function obj(giveName){
this.name = giveName;
}

obj.prototype.getName = function(){
    return this.name;
}
obj.prototype.setName = function(newName){
    this.name = newName;
}

 let obj2 = new obj('Atharv');
 console.log(obj2)