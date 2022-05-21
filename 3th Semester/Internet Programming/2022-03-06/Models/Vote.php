<?php

class Vote
{
    /**
     * @param Candidate $candidate
     */
    public function __construct(
        private Candidate $candidate
    )
    {
    }

    /**
     * @return Candidate
     */
    public function getCandidate(): Candidate
    {
        return $this->candidate;
    }

    /**
     * @param Candidate $candidate
     * @return Vote
     */
    public function setCandidate(Candidate $candidate): Vote
    {
        $this->candidate = $candidate;
        return $this;
    }


}