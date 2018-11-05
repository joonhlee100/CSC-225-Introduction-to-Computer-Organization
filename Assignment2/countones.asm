;start at x3000
.ORIG x3000
;load value from R0 to x3100
LD R0, #255

;clear R1(counter of 1's)
AND R1, R1, #0
;clear R2(loop counter)
AND R2, R2, #0
;clear R3(temp value)
AND R3, R3, #0
;copy R0 to R3
ADD R3, R0, #0
;test if value is negative
ADD R3, R3, #0

BRzp LOOP1
;add to counter if negative
ADD R1, R1, #1
;check remaining 15 bits
LOOP1 AND R2, R2, #0
;set loop counter to -15
ADD R2, R2, #-15
;bit shift to left
LOOP2 ADD R3, R3, R3

BRzp LOOP3
;add counter
ADD R1, R1, #1
;loop until done
LOOP3 ADD R2, R2, #1

BRn LOOP2

;store value in x3101
ST R1, #241
HALT
.END
