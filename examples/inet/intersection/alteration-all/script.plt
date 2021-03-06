set terminal postscript eps enhanced color "Times-New-Roman" 18
set grid
set output "alteration-all.eps"
set xlabel "Time (s)"
set ylabel "Traffic light timing"
set key left
set title "Bypass all messages"

plot [0:90] [-15:15] "tl3" title "TL3 behavior" with lines lt 1 lc rgb "#FF0000" lw 2, "tl1" title "TL1, TL2 behavior" with lines  lt 1 lc rgb "#00FF00" lw 2
