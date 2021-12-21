const proto = {
    slogan: function(){
        return 'company is the best';
    },
    changeName: function(newName){
        this.name = newName;
    }
}
//esy syntax
const harry = Object.create(proto);
harry.name = 'harry';
harry.role = 'progarammer';
harry.changeName = 'harry'
// console.log(harry);

//old syntax
const harry1 = Object.create(proto, {
     name: {value : 'atharv', writable : true},
     role: {value : 'B-19'}
})
harry1.changeName('atharv1');
// console.log(harry1);

function employee(name, salary , exp){
    this.name = name;
    this.salary =  salary;
    this.exp = exp;

}

//slogn
employee.prototype.slogan = function(){
    return `this is the best. Regard , ${this.name}`;
}

let objEmp = new employee('atharv',2345254,29);
console.log(objEmp.slogan());


//for programmer
function programmer(name , salary, experience , lang){
    employee.call(this, name , salary , experience);
    this.lang = lang;
}
 

programmer.prototype = Object.create(employee.prototype);

//manually set constructor
programmer.prototype.constructor = programmer;

let atharv = new programmer('atharv2' , 300000 , 2 , 'javascript');
console.log(atharv.slogan())