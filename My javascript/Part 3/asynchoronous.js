//asynchoronous and sychoronous
setTimeout(()=>{//it delays runtime

    for(let i = 0; i < 45 ; i ++){
        const element = i;
        console.log('this is index num' + i);
    }
},100)//time in milisecond
console.log('done printing')