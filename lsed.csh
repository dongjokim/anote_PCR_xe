#!/bin/csh -f

cat << EOF >lsed.rules
s/\\\bge/\\\begin{equation}/g
s/\\\ende/\\\end{equation}/g
s/\\\bgi/\\\begin{itemize}/g
s/\\\endi/\\\end{itemize}/g
#s/\\\xe{}/x_{\\\rm E}/g
#s/\\\ptt{}/p_{\\\rm Tt}/g
#s/\\\pta{}/p_{\\\rm Ta}/g
#s/\\\ptq{a}/\\\hat{p}_{\\\rm Ta}/g
#s/\\\ptq{t}/\\\hat{t}_{\\\rm Ta}/g
#s/\\\za/z_{\\\rm a}/g
#s/\\\zt/z_{\\\rm t}/g
#s/\\\dphi/\\\Delta\\\phi/g
#s/\\\kt{}/ k_{\\\rm T}/g
EOF

sed -f lsed.rules <$1.tex

foreach f ( *.tex ) 
#  echo $f
#  sed -f lsed.rules < $f >tmp.tex
#  mv tmp.tex $f
end 


#foreach f (*.texshop) 
#  echo draftCorrel_v1.6.tex |awk '{printf( "%s",$1)}' >$f
#end 


#sed -f << EOF $f 
#s/p\_T/p\_{\\rm T}/g
#s/m\_T/m\_{\\rm T}/g
#s/x\_T/x\_{\\rm T}/g
#s/{T}/{\\rm T}/g
#s/{part}/{\\rm part}/g
#s/{coll}/{\\rm coll}/g
#s/{evt}/{\\rm evt}/g
#s/{AA}/{\\rm AA}/g
#s/{AB}/{\\rm AB}/g
#s/mid-rapidity/midrapidity/g
#s/di-hadron/dihadron/g
#EOF


