// Online Javascript Editor for free
// Write, Edit and Run your Javascript code using JS Online Compiler

console.log("Try programiz.pro");

const arr = [1,3,4,12]

arr.forEach((item,index)=> {
    console.log(item,index)
})

const odd = arr.filter((item) =>   item%2!= 0)
console.log(odd)


const sum = arr.reduce((res,arr1) => {
    return res+=arr1;
})
console.log(sum)
// runs on every number in array , and return true even if only one value satisfies condition
const no_lessthan10 = arr.some((value) =>  value <=0)
console.log(no_lessthan10)

const positive = arr.every((value) => value >10)
console.log(positive)
