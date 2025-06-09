##
# Presentación Final
#
# @file
# @version 0.1

all: sample.pdf

sample.pdf: sample.tex
	lualatex --shell-escape sample.tex
	biber sample
	lualatex --shell-escape sample.tex
	lualatex --shell-escape sample.tex

clean:
	rm -f sample.aux sample.bbl sample.bcf sample.blg \
	      sample.log sample.out sample.run.xml \
	      sample.toc sample.lof sample.lot

.PHONY: all clean


# end
