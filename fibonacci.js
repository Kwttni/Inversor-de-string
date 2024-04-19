function check_fibonacci(number) {
    if (number < 0) {
        return false;
    }

    var a = 0;
    var b = 1;

    while (a < number) {
        var c = a;
        a = b;
        b = c + b;
    }

    return number === a;
}

var number = parseInt(prompt("Insira um número: "));
var result = check_fibonacci(number);
console.log(result); 