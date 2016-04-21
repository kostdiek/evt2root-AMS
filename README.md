# evt2root-AMS
This is the evt2root files for the AMS group at UND, originally created by Karl Smith and edited by Karen Ostdiek.

analysistoots.C was originally written by William Bauder, edited by Karen Ostdiek. Contains functions to draw histograms, cuts, and canvases.

cuts.C written by Karen Ostdiek. Contains a function to define and open a cut from a root file. Edit the names as you need.

multidraw.C written by Karen Ostdiek. Contains a function to open several runs at once and plot a particular histogram (de12 vs de3) from each run together. It also sets the axis titles.

multidraw1vPos.C written by Karen Ostdiek. Similar to multidraw.C except it draws the de1 vs Pos_X histogram.

multidraw3vPos.C written by Karen Ostdiek. Similar to multidraw.C except it draws the de3 vs Pos_X histogram.

multidraw12v3.C written by Karen Ostdiek. Same as multidraw.C

open.C written by Karen Ostdiek. Contains a function to output to the screen the number of counts that pass through a set of cuts on a histogram. Run file must have already been declared and opened. The function here takes the run number as an argument.

SetPlotStyle.C given by Micha Kilburn. Sets plot style and color for the histograms. After typing .L SetPlotStyle.C, you will need to then type SetRainbowStyle() for this function to be used.
