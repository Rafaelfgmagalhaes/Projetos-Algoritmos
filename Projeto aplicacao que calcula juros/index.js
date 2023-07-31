import input from 'readline-sync'

console.log('---------------------------------------')
console.log('         Calculadora de Juros          ')
console.log('---------------------------------------')
console.log(' ')

let valorDivida = Number(input.question('Informe o valor da divida: R$ '))
let diasAtraso = input.question('Informe quantos dias de atraso possui a divida: ')
let dividaJuros = ''
let taxaJuros = ''

if(diasAtraso <= 14){
     dividaJuros = Number(((valorDivida * 5) / 100)) + Number(valorDivida)
     taxaJuros = '5%'
}else{
     dividaJuros = Number(((valorDivida * 10) / 100)) + Number(valorDivida)
     taxaJuros = '10%'
}


console.log('')
console.log('')
console.log('----------------------------------------------------')
console.log('')
console.log(`Valor original da dívida: ${valorDivida.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})}`)
console.log(`Dias de atraso: ${diasAtraso} `)
console.log(`Taxa de juros: ${taxaJuros} `)
console.log(`Valor total com juros: ${dividaJuros.toLocaleString('pt-BR', {style: 'currency', currency: 'BRL'})}`)