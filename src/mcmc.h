#ifndef MCMC_H_
#define MCMC_H_

#include <vector>
#include <map>

#include "state_reconstructor_simple.h"
#include "rate_model.h"
#include "tree.h"
#include "sequence.h"

void sm0_mcmc(int reps, int sampleiter, Tree * tree, StateReconstructorSimple & sr, RateModel & rm, vector<Sequence> & seqs, vector<Sequence> & sr_seqs, map<string,vector<int> > & codon_pos);

#endif /* MCMC_H_ */