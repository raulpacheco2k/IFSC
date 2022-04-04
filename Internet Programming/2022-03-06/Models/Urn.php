<?php

class Urn
{
    /**
     * @param string $section
     * @param string $zone
     * @param array $votes
     */
    public function __construct(
        private string $section,
        private string $zone,
        private array  $votes
    )
    {
    }

    /**
     * @return string
     */
    public function getSection(): string
    {
        return $this->section;
    }

    /**
     * @param string $section
     * @return Urn
     */
    public function setSection(string $section): Urn
    {
        $this->section = $section;
        return $this;
    }

    /**
     * @return string
     */
    public function getZone(): string
    {
        return $this->zone;
    }

    /**
     * @param string $zone
     * @return Urn
     */
    public function setZone(string $zone): Urn
    {
        $this->zone = $zone;
        return $this;
    }

    /**
     * @return array
     */
    public function getWishes(): array
    {
        return $this->votes;
    }

    /**
     * @param Vote $votes
     * @return Urn
     */
    public function setWishes(Vote $votes): Urn
    {
        $this->votes[] = $votes;
        return $this;
    }
}