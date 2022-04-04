<?php

class Candidate
{
    /**
     * @param int $number
     * @param string $name
     * @param int $post
     */
    public function __construct(
        private int    $number,
        private string $name,
        private int    $post
    )
    {
    }

    /**
     * @return int
     */
    public function getNumber(): int
    {
        return $this->number;
    }

    /**
     * @param int $number
     * @return Candidate
     */
    public function setNumber(int $number): Candidate
    {
        $this->number = $number;
        return $this;
    }

    /**
     * @return string
     */
    public function getName(): string
    {
        return $this->name;
    }

    /**
     * @param string $name
     * @return Candidate
     */
    public function setName(string $name): Candidate
    {
        $this->name = $name;
        return $this;
    }

    /**
     * @return int
     */
    public function getPost(): int
    {
        return $this->post;
    }

    /**
     * @param int $post
     * @return Candidate
     */
    public function setPost(int $post): Candidate
    {
        $this->post = $post;
        return $this;
    }


}