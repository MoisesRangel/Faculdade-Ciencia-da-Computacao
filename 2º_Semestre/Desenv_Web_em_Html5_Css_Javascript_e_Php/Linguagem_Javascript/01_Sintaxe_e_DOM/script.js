//Variaveis e caixa de alerta
let soma = 3 + 3;
alert(`O valor da soma é: ${soma}`)

// Chamando a função e guardando o retorno
let resultadoMultiplicacao = multiplique(10,50);

// Alterando o html na tela via DOM
let divLocal = document.getElementById("exibe-resultado");
divLocal.innerHTML += resultadoMultiplicacao;

// Definição da função
function multiplique(numero1, numero2) {
    let resultado = numero1 * numero2;
    return resultado;
}