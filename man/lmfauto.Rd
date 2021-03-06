% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/algo-lmfauto.R
\name{lmfauto}
\alias{lmfauto}
\title{Individual Tree Detection Algorithm}
\usage{
lmfauto(plot = FALSE, hmin = 2)
}
\arguments{
\item{plot}{logical set it to \code{TRUE} if processing a plot instead of a large area. What changes
is the estimation of the local number of trees. It should be based on the local neighborhood for the general
case but this does not make sense for a plot.}

\item{hmin}{numeric. Minimum height of a tree. Threshold below which a point cannot be a local
maxima. Default is 2.}
}
\description{
This function is made to be used in \link{find_trees}. It implements a fast and parameter-free
algorithm for individual tree detection for broad coverage. It is based on two local maximum filters
(LMF). The first pass performs a very rough estimation of the number of trees with a fixed window
size. Based on this rough estimate it automatically computes a variable windows size LMF with workable
parameters. This algorithm is made to process wide areas rather than small plots. See references
for more details.
}
\examples{
LASfile <- system.file("extdata", "MixedConifer.laz", package="lidR")
las <- readLAS(LASfile)
ttops <- find_trees(las, lmfauto())

x = plot(las)
add_treetops3d(x, ttops)
}
\references{
Jean-Romain Roussel, Francesco Pirotti, Luiz Carlos Estraviz Rodriguez,
Jean-François Bourdon, Antoine Lebœuf, Marc-Olivier Lemonde, Alexis Achim. Development of an
auto-adaptive individual tree detection algorithm for airborne LiDAR data (in prep.)
}
\seealso{
Other individual tree detection algorithms: 
\code{\link{LayerStacking}()},
\code{\link{multichm}()},
\code{\link{ptrees}()}
}
\concept{individual tree detection algorithms}
