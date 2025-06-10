##
# Presentación Final
#
# @file
# @version 0.2

TEX := ./sample.tex
PDF := ./sample.pdf
BASENAME := $(basename $(notdir $(TEX)))

all: $(PDF)

$(PDF): $(TEX)
	cd . && lualatex --shell-escape $(BASENAME).tex
	cd . && biber $(BASENAME)
	cd . && lualatex --shell-escape $(BASENAME).tex
	cd . && lualatex --shell-escape $(BASENAME).tex

clean:
	rm -f ./sample.aux ./sample.bbl ./sample.bcf \
	      ./sample.blg ./sample.log ./sample.out \
	      ./sample.run.xml ./sample.toc \
	      ./sample.lof ./sample.lot

.PHONY: all clean
