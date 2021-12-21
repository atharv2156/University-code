//Generators in JavaScript
function* numberGen(){
    let i = 0;
    // yield 1;
    // yield 2;
    // yield 3;
    // yield 4;
    while(true){
        yield i++;
        // yield (i++).toString();
    }
}
const gen = numberGen();
console.log(gen.next().value);//gives value
console.log(gen.next());
