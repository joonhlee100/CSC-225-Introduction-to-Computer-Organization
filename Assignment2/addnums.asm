.ORIG x3000      
AND   R1,R1,#0  
AND   R4,R4,#0  
ADD   R4,R4,#10 
LEA   R2, xFC	
LDR   R3,R2,#0  
ADD   R2,R2,#1  
ADD   R1,R1,R3  
ADD   R4,R4,#-1 
BRP   #-5		
HALT            
.END

;5. 1)
