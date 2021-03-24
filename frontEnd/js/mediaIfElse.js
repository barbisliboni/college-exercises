// var n1 = 5, n2 = 7, n3 = 3;
//             var m = (n1+n2+n3) / 3;
            
//             if (m >= 6){
//                 document.write("<br> Aprovado");     
//             }
//             else if (m>=4) {
//                 document.write("<br> Em recuperação");     
//             } 

// 			else {
// 			    document.write("<br> Reprovado");     
// 			}	
			
// 			document.write(" com média: " + parseFloat(m.toFixed(2))); 

function inserir(){
    var Nota1 = document.getElementById('nota1');
    var Nota2 = document.getElementById('nota2');

    if(Nota1.value == '' || Nota2.value == ''){
        alert('As notas devem ser preenchidas corretamente!')
    }

    if(Nota1.checkValidity() == false){
        alert(Nota1.validationMessage);
    }

    
    if(Nota2.checkValidity() == false){
        alert(Nota2.validationMessage);
    }
}