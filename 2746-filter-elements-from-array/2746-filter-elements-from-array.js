/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const arr1=[];
    for(let i=0; i<arr.length; i++){
        let truth=fn(arr[i],i);
     
        if(truth){
            arr1.push(arr[i]);
          
        }
    }
    return arr1;
};